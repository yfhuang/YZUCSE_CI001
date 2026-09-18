# Pattern — Simulation

## Recognition

A simulation problem gives rules and asks you to apply them in order.

Mental model:

```text
initial state
    |
read one event/command
    |
update state
    |
repeat
    |
report final or intermediate state
```

## Example state machine

```cpp
int position = 0;

for (char cmd : commands) {
    if (cmd == 'L') {
        --position;
    } else if (cmd == 'R') {
        ++position;
    }
}
```

## Better simulation habit

Write down:

1. What is the state?
2. What events can occur?
3. How does each event modify the state?
4. What must be output?
5. Does state reset between test cases?

## Example state structure

```cpp
struct State {
    int x = 0;
    int y = 0;
    int direction = 0;
};
```

Simulation becomes easier when state variables have clear meaning.

## Common mistakes

- implementing commands in the wrong order;
- not resetting state;
- updating one variable before another calculation needs the old value;
- misunderstanding cyclic behavior;
- mixing parsing logic with state-update logic until the code becomes hard to debug.
