# Systems programming

## Workshop #1 - Introduction to C

Compile the main.c file with the name of your choice.

```bash
gcc -Wall main.c -o imc
```

##Introduction

In this workshop you will write a small program in C, in order to become familiar with the syntax.

## Description

This program asks for the weights and heights of n persons and will 
calculate the body mass index of each. Finally it will display the average and maximum body mass index.

## Usage

Call the path to the compiled file, send the -p argument followed by the number of persons for whom you want to calculate the imc.

./imc -p <numberOfPeople>

```c
./imc -p 3
Peso: 60
Altura: 1.6
Peso: 80
Altura: 1.8
Peso: 70
Altura: 1.66
Promedio IMC: 24.5
Maximo IMC: 25.4

./imc -p 0
Numero de personas invalido

./imc -p 3
Peso: 60
Altura: 1.6
Peso: 80
Altura: -1.7
Numero invalido

```
