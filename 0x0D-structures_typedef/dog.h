#ifndef _DOG_H_
#define _DOG_H_

/*
 * File: dog.h
 * Auth: Brennan D Baraban
 * Desc: Header file that defines a new type struct dog.
 */

/**
 * struct dog - A new type describing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
