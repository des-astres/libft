# libft

With libft, I created a library of functions that I would be able to reuse later as part of future projects.  
About half of them are my own implementations of C standard library functions.  
The other half are additional functions which are helpful to manipulate strings, write data to a specified file descriptor, or handle singly linked lists.  

## Libc functions

I have reimplemented the following standard library functions:  
- isalpha
- isdigit
- isalnum
- isascii,
- isprint
- toupper
- tolower
- strlen
- strlcpy
- strlcat
- strchr
- strrchr
- strnstr
- atoi
- bzero
- memset
- memcpy
- memmove
- memchr
- memcmp
- memchr
- calloc
- strdup

## Additional functions

- ft_substr: returns a substring from the string passed as argument  
- ft_strjoin: returns a string resulting from the concatenation of the two strings passed to it as arguments  
- ft_strtrim: trims the characters from the specified character set, if it finds them at the beginning or at the end of the string passed to it  
- ft_split: splits a string into an array of substrings using a given character as a delimiter  
- ft_itoa: converts an integer to its string representation
- ft_strmapi: applies a function to each character of a string, creating a new string resulting from successive applications of this function
- ft_striteri: applies a function to each character of a string, directly modifying said character as needed  
- ft_putchar_fd: write a character to the specified file descriptor  
- ft_putstr_fd: write a string to the specified file descriptor  
- ft_putendl_fd: write a string followed by a newline  
- ft_putnbr_fd: write an integer to the specified file descriptor

## Bonus functions

- ft_lstnew: creates a new node  
- ft_lstadd_front: adds a node at the beginning of a list  
- ft_lstadd_back: adds a node at the end of a list  
- ft_lstsize: counts the nodes in a list  
- ft_lstlast: returns the last node in a list  
- ft_lstdelone: frees a given node  
- ft_lstclear: deletes and free all nodes of a list  
- ft_lstiter: applies a function to each node of a list  
- ft_lstmap: creates a list resulting from successive applications of a function to the original list

## Learning focus

This is a school project, which I coded as part of the common core at 42 Paris.  
With this project, I familiarized myself with a number of Libc functions, as I needed to reproduce their behavior exactly (including paying attention to cases of undefined behavior).  
Memory allocation (with malloc and free) was a focus of the additional functions, as were function pointers.  
With the bonus functions, I practiced manipulating singly linked lists.
