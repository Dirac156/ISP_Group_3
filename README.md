# ISP_Group_3

# Elevator

Elevator: [2, 4, 6, 8, 2, 6, 8, 7, 4, 8] : People going inside of the elevator
Elevator: [2, 2, 4, 4, 6, 6, 7, 8, 8, 8]

second floor
> remove index with value 2
[4, 4, 6, 6, 7, 8, 8, 8]
print(" 2 people left...")
wait 1 second

third floor
> remove index with value 3
[4, 4, 6, 6, 7, 8, 8, 8]
wait 1 second


fourth floor
> remove index with value 4
[ 6, 6, 7, 8, 8, 8]
wait 1 second

...

Till the array is empty or we have reached the last floor.

Issue:

> 1
int arr[10] = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

first loop: switch on the elevator
    nexted loop: add people inside of the array
    what happened when someone enters a letter?
    what happened when soneone enters a digit more than 8 or less than 2 ?
            [2, 0, 0, 0, ...]
            [2, 5, 0, 0, ...]
            [...]     

> 2
soting the array

1. adding peeople inside of the elevator: adding items inside of the array
2. sorting the array (I have some code to do that)
3. move the elevator ( check if array is empty, remove item inside of the array, restart the process).

++
4. handle signals
