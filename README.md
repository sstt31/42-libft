## ABOUT
The first project at 42, libft, involves learning how the standard functions of C programming work by writing them from scratch and creating a personal library. This project is vital as the library will be used in future assignments at 42.

If you're a 42 student, it's highly recommended that you go through the process of writing your code and testing it yourself rather than copying and pasting code that you only partially understand. If you've completed your piscine, there's no reason why you couldn't tackle this project on your own! Be patient and thorough.

## HOW TO USE
#### 1 - Clone the repository
```bash
git clone https://github.com/sstt31/libft-42.git
```

#### 2 - Enter the project folder and run `make`
```bash
cd libft/libft
make
```

#### 3 - To use in your code, include the header
```c
#include "libft.h"
```

#### MAKEFILE RULES

`make` - Compile libft **mandatory** files.

`make bonus` - Compile libft **bonus** files.

`make all` - Compile **mandatory** + **bonus** files.

`make clean` - Delete all .o (object files) files.

`make fclean` - Delete all .o (object file) and .a (executable) files.

`make re` - Use rules `fclean` + `all`.
