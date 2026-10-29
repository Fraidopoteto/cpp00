# CPP Module 00

A project from the 42 curriculum. The goal of this module is to introduce the basics of object-oriented programming in C++. You will learn about classes, member functions, standard standard I/O streams, and strings by building a simple phonebook application.

## About the implementation

This project is written in strict adherence to the C++98 standard and features:

* An interactive command-line loop that accepts three commands: `ADD`, `SEARCH`, and `EXIT`.
* Two distinct classes:
  * `PhoneBook`: Manages an array of up to 8 `Contact` objects. It handles the logic for adding new contacts and searching/displaying existing ones.
  * `Contact`: Stores the individual data fields (first name, last name, nickname, phone number, darkest secret) and provides getter and setter methods to access them securely.
* Automatic text formatting: When displaying the contacts in the search overview, columns are neatly aligned with a width of 10 characters. Strings longer than 10 characters are truncated and end with a dot (`.`).
* Circular buffer logic: Although the maximum capacity is 8 contacts, the implementation allows continuous additions by overwriting the oldest contacts once the limit is reached.

## Compilation and Usage

### 1. Compilation

To compile the project, run the `make` command in the root directory. This will compile the source files using `c++` with the required flags (`-Wall -Wextra -Werror -std=c++98`) and generate the `phonebook` executable.

```bash
make
```

### 2. Usage

Run the compiled executable without any arguments:

```bash
./phonebook
```

Once the program is running, you will be prompted to enter one of the following commands:
* `ADD`: Prompts you to input the details for a new contact.
* `SEARCH`: Displays a formatted table of all saved contacts. You can then input an index to view the complete details of a specific contact.
* `EXIT`: Quits the program and clears all contacts (contacts are not saved persistently).

## Structure

* `main.cpp` - The entry point of the program, containing the main loop and user input routing.
* `ClassPhoneBook.hpp` / `ClassPhoneBook.cpp` - Declaration and implementation of the PhoneBook class.
* `ClassContact.hpp` / `ClassContact.cpp` - Declaration and implementation of the Contact class.
* `Makefile` - Contains the rules to compile the project.

## Author

* **joschmun** - *42 Student*