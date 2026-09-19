# Pattern — Simulation

## Recognition

A simulation problem gives a set of rules and asks you to apply them in order.

The main idea is:

- start with some initial state;
- read each event or command one by one;
- update the state according to the rule;
- keep doing this until all events are processed;
- then report the final result.

## Mental model

```text
initial state
    |
read one command
    |
update the state
    |
repeat
    |
print or return the final state
```

This is very similar to following a real-life instruction list step by step.

## Example state machine

```cpp
string commands;
int position = 0;

for (int i = 0; i < commands.length(); ++i) {
    char cmd = commands[i];

    if (cmd == 'L') {
        --position;
    }
    else if (cmd == 'R') {
        ++position;
    }
}
```

This code means:

- `position` starts at 0;
- every time we see `'L'`, move left by 1;
- every time we see `'R'`, move right by 1;
- after processing all commands, `position` tells us the final result.

## Better simulation habit

When solving a simulation problem, write down these questions:

1. What is the current state?
2. What kinds of events or commands can happen?
3. How does each event change the state?
4. What do we need to output at the end?
5. Does the state need to be reset for each test case?

## Example state structure

```cpp
struct State {
    int x = 0;
    int y = 0;
    int direction = 0;
};
```

This makes the simulation easier to understand because each variable has a clear meaning.

## Common mistakes

- applying commands in the wrong order;
- forgetting to reset the state;
- using an updated value before the old value is still needed;
- misunderstanding cycles or repeated behavior;
- mixing input parsing and state updates in a way that becomes hard to debug.

## Intuition

Simulation is like following a recipe step by step.

You do not solve the whole problem at once. Instead, you:

- keep track of the current situation,
- apply one rule at a time,
- update the situation,
- continue until everything is done.

This is why simulation problems often feel like a careful “walk through the process” problem.
