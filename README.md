# BasicRandomizingPattern
It is a pattern I made in C++, which was a part of my final exam of Programming Fundamentals. Its a basic 5x8 grid that randomly generates either  1 (alive) or 0(dead). There is a set of rules that simulates the randomizing of the pattern:

1. If an element has less than 2 alive neighbours, the element dies of lonliness (changes to 0).
2. If an element has more than 5 alive neighbours, the element dies of overpopulation.
3. If an elemnt has 3 or 4 alive neighbours, the element becomes alive (changes to 1).
4. If an element has 2 or 5 alive neighbours, there is no change in the element. 

Run it on a C++ complier and see the results!
