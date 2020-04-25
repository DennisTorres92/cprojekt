#ifndef DEFINE_H
#define DEFINE_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

typedef int8_t	int8; 
typedef int16_t	int16;
typedef int32_t	int32;
typedef int64_t	int64;

typedef  uint8_t	uint8;
typedef uint16_t	uint16;
typedef uint32_t	uint32;
typedef uint64_t	uint64;

typedef float	float32;
typedef double	float64;

typedef struct data	data;
struct data{
	int id;
	char[20] firstname;
	char[30] lastname;
};

void printdata(struct data* data);
#endif	/*	DEFINE_H	*/
