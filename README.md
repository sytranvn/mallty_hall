# Monty Hall problem simulation
The problem https://en.wikipedia.org/wiki/Monty_Hall_problem

![](Monty_open_door.svg)

Suppose you're on a game show, and you're given the choice of three doors:
Behind one door is a car; behind the others, goats. You pick a door, say No. 1,
and the host, who knows what's behind the doors, opens another door, say No. 3,
which has a goat. He then says to you, "Do you want to pick door No. 2?" Is it
to your advantage to switch your choice?


If you think switching to door No.2 doesn't matter, I was on your team  🤯.

<summary>

Some tests

<details>

```
~/Code/sytran/monty_hall (master =)
└─$ ./a 1000
Start simulating tests, use ^-C to cancel.
Total tests: 1000, switch win: 655, no switch win: 345
Switch win propability: 65.50%, no switch win propability: 34.50%
~/Code/sytran/monty_hall (master =)
└─$ ./a 100000
Start simulating tests, use ^-C to cancel.
Total tests: 100000, switch win: 66631, no switch win: 33369
Switch win propability: 66.63%, no switch win propability: 33.37%
~/Code/sytran/monty_hall (master =)
└─$ ./a 100000000
Start simulating tests, use ^-C to cancel.
Total tests: 100000000, switch win: 66660300, no switch win: 33339700
Switch win propability: 66.66%, no switch win propability: 33.34%
```

</details>

</summary>
