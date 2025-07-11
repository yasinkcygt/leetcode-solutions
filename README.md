# Add Two Numbers

This solution implements the "Add Two Numbers" problem from [LeetCode](https://leetcode.com/problems/add-two-numbers/).

## Problem Description

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each node contains a single digit. Add the two numbers and return the sum as a linked list.

## Approach / Algorithm

- Initialize a dummy node to simplify the linked list construction.
- Use a pointer `current` to build the new linked list.
- Maintain a variable `carry` to hold the carry-over digit after addition.
- Traverse both input lists simultaneously, adding corresponding digits along with the carry.
- Create new nodes for each digit of the result (sum mod 10).
- Update carry as sum divided by 10.
- Continue until both lists and carry are fully processed.
- Return the linked list starting from the node next to dummy.

## Code Location

The C implementation can be found in `C/add_two_numbers.c`.