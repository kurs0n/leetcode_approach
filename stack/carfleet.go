package main

import (
	"sort"
)

type Car struct {
	position int
	speed    int
	time     float64
}

func carFleet(target int, position []int, speed []int) int {
	cars := make([]Car, len(position))
	stack := []float64{}
	fleet := 0
	for i := 0; i < len(position); i++ {
		cars[i] = Car{position[i], speed[i], float64(target-position[i]) / float64(speed[i])}
	}
	sort.Slice(cars, func(i, j int) bool {
		return cars[i].position > cars[j].position
	})

	for i := 0; i < len(cars); i++ {
		if len(stack) == 0 {
			stack = append(stack, cars[i].time)
			fleet++
		}
		if stack[len(stack)-1] >= cars[i].time {

		} else {
			stack = append(stack, cars[i].time)
			fleet++
		}
	}

	return fleet
}
