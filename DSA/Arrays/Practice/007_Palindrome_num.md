# Problem:
Panlindrome number

# Platform:
LeetCode #009

# Difficulty:
Easy

# Approach:
Reverse Number Approach

# Time Complexity:
O(log n)

# Space Complexity:
O(1)

# First Thought:
  * the property of palindrome is it can be read same from front or back.
  * since it was not an array or string i decided to use modulo operator to
    fetch the last digit dividing by 10.

# Learning:
  * we do not only need to directly save the fetched digit
    instead we also need to mutate it in 10's and 100's etc
    places. As I did (palin_num = palin_num*10+digit).

