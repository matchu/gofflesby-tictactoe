Tic-Tac-Toe Golf
================

**The Challenge:** Play through a game of tic-tac-toe.

You will receive a 9-digit number on STDIN. Each digit represents a move, where
the number refers to the number of the respective square on the board.

    1|2|3
    -+-+-
    4|5|6
    -+-+-
    7|8|9

X always goes first. Play through the game turn-by-turn, and output the winner
and the final board. Your input may give you moves even after someone has won.
Ignore them. It doesn't matter what *would* have happened after somebody wins.

The format of your output must exactly match those of the test cases to count
as passing.

See the tests folder for some examples. You will receive the contents of
`in.txt` on STDIN, and are expected to return the contents of `out.txt` on
STDOUT.

## An example (tests/x1-7)

Given input: `125973468`

Return output:

    Winner: X
    X|O|O
    -+-+-
    X|X| 
    -+-+-
    X| |O

## Run tests

Put your script in `scripts/`, and let [Gofflesby][g] do the rest :)

    $ ruby test.rb myscript.rb

[Gofflesby][g] automatically runs all the tests
on `scripts/myscript.rb`, giving you pass/fail feedback instantly.

A few samples are included in `scripts/`. Thanks to grelca for the PHP.

### Language support

Gofflesby currently supports

* Ruby
* PHP
* C++ (requires g++)

...but this can easily be changed. `config.yml` contains basic bash instructions
on how to run a file of any filetype. `{SCRIPT}` is replaced with the script
name, and `{IO}` is replaced with the STDIN/STDOUT part of the command. Add your
own languages as needed, and feel free to send a pull request.

[g]: http://github.com/matchu/gofflesby
