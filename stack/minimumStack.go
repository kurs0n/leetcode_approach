package main

type MinStack struct {
	stack []int
}

func Constructor() MinStack {
	minStack := MinStack{}
	minStack.stack = []int{}
	return minStack
}

func (this *MinStack) Push(val int) {
	this.stack = append(this.stack, val)
}

func (this *MinStack) Pop() {
	this.stack = this.stack[:len(this.stack)-1]
}

func (this *MinStack) Top() int {
	return this.stack[len(this.stack)-1]
}

func (this *MinStack) GetMin() int {
	min := this.stack[0]
	for _, v := range this.stack {
		if v < min {
			min = v
		}
	}
	return min
}
