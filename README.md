Lazy-Hanoi
==========

Data &amp; Algorithm Lab #3

#Question
Lazy Monks decide to use a more efficient way to move plates: the only requirement is at all time, biggest plate of every rod should be at the bottom.
#Solution
I've find a solution which gives a moving times of `N^2-N+1`.
Moving notation: `0 2` means moving top plate on 2nd rod to 3rd rod.
Take `N=5` as an example:
0 2
0 1 ┐
2 1 ┘2
0 2 ┐
1 2 │3
1 2 ┘
0 1 ┐
2 1 │
2 1 │4
2 1 ┘
*0 2*
1 0 ┐
1 0 │  
1 0 │4
1 2 ┘
0 1 ┐
0 1 │3
0 2 ┘
1 0 ┐
1 2 ┘2
0 2
So it's clear to use two nested for loop to complish the work.
