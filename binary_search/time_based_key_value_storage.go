package main

type TimestampValue struct {
	val       string
	timestamp int
}

type TimeMap struct {
	Map map[string][]TimestampValue
}

func Constructor() TimeMap {
	return TimeMap{
		Map: make(map[string][]TimestampValue),
	}
}

func (this *TimeMap) Set(key string, value string, timestamp int) {
	if _, exists := this.Map[key]; !exists {
		this.Map[key] = []TimestampValue{}
	}
	this.Map[key] = append(this.Map[key], TimestampValue{value, timestamp})
}

func (this *TimeMap) Get(key string, timestamp int) string {
	left := 0
	right := len(this.Map[key]) - 1
	mid := right / 2
	for left <= right {
		if this.Map[key][mid].timestamp < timestamp {
			left = mid + 1
			mid = (left + right) / 2
		}

		if this.Map[key][mid].timestamp > timestamp {
			right = mid - 1
			mid = (left + right) / 2
		}

		if this.Map[key][mid].timestamp == timestamp {
			return this.Map[key][mid].val
		}
	}
	if len(this.Map[key]) > 0 && timestamp >= this.Map[key][mid].timestamp {
		return this.Map[key][mid].val
	} else {
		return ""
	}
}
