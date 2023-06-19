<h1> 0x0E-structures_typedef </h1>

<h2> Structures and Typedef: A Powerful Duo </h2>

<h3> structures </h3>

In the world of programming, the C language offers a powerful feature called `structures`, which allows for defining custom data types. `Structures` are a collection of related variables, grouped together under a single name, making it easier to organize and manipulate data.
By defining a `structure`, you can create `complex data structures` that represent real-world entities.

<b> NOTE: </b> This defines a blueprint or template for creating objects of that struct type. This concept does not make C Object Oriented as it still lacks some propertiesn of Object Oriented Program.

<em> To create an </em> `object` <em> of a </em>`structure` <em> in C, we would need to explicitly allocate memory for it using the function </em> `malloc()` <em> or we declare it as a local variable.</em>

<em> Example:</em>

```
#include <stdio.h>
/* globally declaring the Structure */
struct Engineers
{
	/* declaring different variables
	 * of different data types
	 */
	char name[50];
	int age;
	float height;
}; /* end structure */

int main(void)
{
	struct Engineers head_chief;
    
	/* identifying the Engineering team head_chief */
	strcpy(person1.name, "Lawal"); /* name */
	person1.age = 25; /* Age */
	person1.height = 1.99; /* height in meters */

	/* getting or accessing engineer's details */
	printf("Name: %s\n", person1.name);
	printf("Age: %d\n", person1.age);
	printf("Height: %.2f\n", person1.height);

	return 0;
} /* END FUNCTION MAIN */
```

This code above demonstrates the use of a structure called `Engineers` that stores information about a engineers name, age, and height.
An instance of the structure is created and initialized, and the structure members are accessed using the `dot` operator.


<h3> typedef </h3>

`typedef` comes to the rescue by enabling the ability to create new names for existing data types. It allows for improved code readability and portability. With `typedef`, you can create `aliases` for <em> complex data types</em>, making your code more concise and self-explanatory.

<em> Example: adopted from GPT </em>

```
#include <stdio.h>

typedef struct
{
	int day;
	int month;
	int year;
} Date;

int main(void)
{
	Date today;

	today.day = 19;
	today.month = 6;
	today.year = 2023;

	printf("Today's date: %d/%d/%d\n", today.day, today.month, today.year);

	return 0;
} /* END FUNCTION */
```
In this example, we use `typedef` to create an alias for the `struct` definition. The `Date` structure represents a date with day, month, and year. By using `typedef`, we can now declare variables of type `Date` without having to use the `struct` keyword. This simplifies the code and makes it more readable.



Together, `structures` and `typedef` form a dynamic duo in the C language, empowering programmers to create efficient and well-structured programs.

