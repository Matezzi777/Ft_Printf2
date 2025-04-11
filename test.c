/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxmart2 <maxmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:03:21 by maxmart2          #+#    #+#             */
/*   Updated: 2025/04/11 17:36:19 by maxmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	expect;
	int	actual;

	printf("No flags :\n");
	expect = printf("");
	actual = ft_printf("");
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("Hello World !\n");
	actual = ft_printf("Hello World !\n");
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);

	printf("\n\n%%c :\n");
	expect = printf("%c\n", 'A');
	actual = ft_printf("%c\n", 'A');
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%c\n", 'z');
	actual = ft_printf("%c\n", 'z');
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%c\n", 'é');
	actual = ft_printf("%c\n", 'é');
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("Oki dok%c\n", 'i');
	actual = ft_printf("Oki dok%c\n", 'i');
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%c\n", '\n');
	actual = ft_printf("%c\n", '\n');
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%c\n", '\0');
	actual = ft_printf("%c\n", '\0');
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	
	printf("\n\n%%s :\n");
	expect = printf("%s\n", "Hello World !");
	actual = ft_printf("%s\n", "Hello World !");
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%s\n", "");
	actual = ft_printf("%s\n", "");
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("Oki %s\n", "doki");
	actual = ft_printf("Oki %s\n", "doki");
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%s\n", NULL);
	actual = ft_printf("%s\n", NULL);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	
	
	printf("\n\n%%p :\n");
	expect = printf("%p\n", NULL);
	actual = ft_printf("%p\n", NULL);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%p\n", (void *)0x50f);
	actual = ft_printf("%p\n", (void *)0x50f);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	int	test = 12;
	expect = printf("%p\n", &test);
	actual = ft_printf("%p\n", &test);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("Ceci est une adresse : %p\n", &test);
	actual = ft_printf("Ceci est une adresse : %p\n", &test);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	
	
	printf("\n\n%%d :\n");
	expect = printf("%d\n", 0);
	actual = ft_printf("%d\n", 0);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%d\n", 7);
	actual = ft_printf("%d\n", 7);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%d\n", -7);
	actual = ft_printf("%d\n", -7);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%d\n", 42);
	actual = ft_printf("%d\n", 42);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%d\n", -42);
	actual = ft_printf("%d\n", -42);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%d\n", 1310);
	actual = ft_printf("%d\n", 1310);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%d\n", -1310);
	actual = ft_printf("%d\n", -1310);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%d\n", 2147483647);
	actual = ft_printf("%d\n", 2147483647);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%d\n", -2147483648);
	actual = ft_printf("%d\n", -2147483648);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("Welcome to %d school !\n", 42);
	actual = ft_printf("Welcome to %d school !\n", 42);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	
	
	printf("\n\n%%i :\n");
	expect = printf("%i\n", 0);
	actual = ft_printf("%i\n", 0);
	printf("Values : EXP (%i) | ACT (%i)\n\n", expect, actual);
	expect = printf("%i\n", 7);
	actual = ft_printf("%i\n", 7);
	printf("Values : EXP (%i) | ACT (%i)\n\n", expect, actual);
	expect = printf("%i\n", -7);
	actual = ft_printf("%i\n", -7);
	printf("Values : EXP (%i) | ACT (%i)\n\n", expect, actual);
	expect = printf("%i\n", 42);
	actual = ft_printf("%i\n", 42);
	printf("Values : EXP (%i) | ACT (%i)\n\n", expect, actual);
	expect = printf("%i\n", -42);
	actual = ft_printf("%i\n", -42);
	printf("Values : EXP (%i) | ACT (%i)\n\n", expect, actual);
	expect = printf("%i\n", 1310);
	actual = ft_printf("%i\n", 1310);
	printf("Values : EXP (%i) | ACT (%i)\n\n", expect, actual);
	expect = printf("%i\n", -1310);
	actual = ft_printf("%i\n", -1310);
	printf("Values : EXP (%i) | ACT (%i)\n\n", expect, actual);
	expect = printf("%i\n", 2147483647);
	actual = ft_printf("%i\n", 2147483647);
	printf("Values : EXP (%i) | ACT (%i)\n\n", expect, actual);
	expect = printf("%i\n", -2147483648);
	actual = ft_printf("%i\n", -2147483648);
	printf("Values : EXP (%i) | ACT (%i)\n\n", expect, actual);
	expect = printf("Welcome to %i school !\n", 42);
	actual = ft_printf("Welcome to %i school !\n", 42);
	printf("Values : EXP (%i) | ACT (%i)\n\n", expect, actual);
	
	
	printf("\n\n%%u :\n");
	expect = printf("%u\n", 0);
	actual = ft_printf("%u\n", 0);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%u\n", 9);
	actual = ft_printf("%u\n", 9);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%u\n", 42);
	actual = ft_printf("%u\n", 42);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("Welcome to %u school !\n", 42);
	actual = ft_printf("Welcome to %u school !\n", 42);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("%u\n", 4294967295);
	actual = ft_printf("%u\n", 4294967295);
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	
	
	// printf("\n\n%%x :\n");
	// expect = printf("%x\n", 0);
	// actual = ft_printf("%x\n", 0);
	// printf("Values : EXP (%x) | ACT (%x)\n\n", expect, actual);
	// expect = printf("%x\n", 7);
	// actual = ft_printf("%x\n", 7);
	// printf("Values : EXP (%x) | ACT (%x)\n\n", expect, actual);
	// expect = printf("%x\n", -7);
	// actual = ft_printf("%x\n", -7);
	// printf("Values : EXP (%x) | ACT (%x)\n\n", expect, actual);
	// expect = printf("%x\n", 42);
	// actual = ft_printf("%x\n", 42);
	// printf("Values : EXP (%x) | ACT (%x)\n\n", expect, actual);
	// expect = printf("%x\n", -42);
	// actual = ft_printf("%x\n", -42);
	// printf("Values : EXP (%x) | ACT (%x)\n\n", expect, actual);
	// expect = printf("%x\n", 1310);
	// actual = ft_printf("%x\n", 1310);
	// printf("Values : EXP (%x) | ACT (%x)\n\n", expect, actual);
	// expect = printf("%x\n", -1310);
	// actual = ft_printf("%x\n", -1310);
	// printf("Values : EXP (%x) | ACT (%x)\n\n", expect, actual);
	// expect = printf("%x\n", 2147483647);
	// actual = ft_printf("%x\n", 2147483647);
	// printf("Values : EXP (%x) | ACT (%x)\n\n", expect, actual);
	// expect = printf("%x\n", -2147483648);
	// actual = ft_printf("%x\n", -2147483648);
	// printf("Values : EXP (%x) | ACT (%x)\n\n", expect, actual);
	// expect = printf("Welcome to %x school !\n", 42);
	// actual = ft_printf("Welcome to %x school !\n", 42);
	// printf("Values : EXP (%x) | ACT (%x)\n\n", expect, actual);
	
	
	// printf("\n\n%%X :\n");
	// expect = printf("%X\n", 0);
	// actual = ft_printf("%X\n", 0);
	// printf("Values : EXP (%X) | ACT (%X)\n\n", expect, actual);
	// expect = printf("%X\n", 7);
	// actual = ft_printf("%X\n", 7);
	// printf("Values : EXP (%X) | ACT (%X)\n\n", expect, actual);
	// expect = printf("%X\n", -7);
	// actual = ft_printf("%X\n", -7);
	// printf("Values : EXP (%X) | ACT (%X)\n\n", expect, actual);
	// expect = printf("%X\n", 42);
	// actual = ft_printf("%X\n", 42);
	// printf("Values : EXP (%X) | ACT (%X)\n\n", expect, actual);
	// expect = printf("%X\n", -42);
	// actual = ft_printf("%X\n", -42);
	// printf("Values : EXP (%X) | ACT (%X)\n\n", expect, actual);
	// expect = printf("%X\n", 1310);
	// actual = ft_printf("%X\n", 1310);
	// printf("Values : EXP (%X) | ACT (%X)\n\n", expect, actual);
	// expect = printf("%X\n", -1310);
	// actual = ft_printf("%X\n", -1310);
	// printf("Values : EXP (%X) | ACT (%X)\n\n", expect, actual);
	// expect = printf("%X\n", 2147483647);
	// actual = ft_printf("%X\n", 2147483647);
	// printf("Values : EXP (%X) | ACT (%X)\n\n", expect, actual);
	// expect = printf("%X\n", -2147483648);
	// actual = ft_printf("%X\n", -2147483648);
	// printf("Values : EXP (%X) | ACT (%X)\n\n", expect, actual);
	// expect = printf("Welcome to %X school !\n", 42);
	// actual = ft_printf("Welcome to %X school !\n", 42);
	// printf("Values : EXP (%X) | ACT (%X)\n\n", expect, actual);
	
	
	printf("\n\n%%%% :\n");
	expect = printf("%%\n");
	actual = ft_printf("%%\n");
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
	expect = printf("Je valide à 80%%\n");
	actual = ft_printf("Je valide à 80%%\n");
	printf("Values : EXP (%d) | ACT (%d)\n\n", expect, actual);
}