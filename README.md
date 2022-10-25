# my_mouse


## Requirments

- ruby

## How to make maps

- in the base folder run ```ruby maze_generator.rb height width "characters_string" > "maze.txt"```
    - characters_string is a string with the following characters in order
        1. wall/obstacle
        2. empty space
        3. path
        4. start
        5. finish
    - for example ```ruby maze_generator.rb 10 20 "* o12"```

## How to run

## Todo

- parse maze_parameters to make matrix representation

## References

- how to read lines https://pubs.opengroup.org/onlinepubs/9699919799/functions/getdelim.html