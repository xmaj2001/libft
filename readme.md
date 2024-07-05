# LIBFT

Bem-vindo à minha `libft`, uma biblioteca personalizada em C desenvolvida como parte do currículo da Escola 42 em Luanda. Esta biblioteca contém funções úteis que são amplamente utilizadas em projetos e exercícios na 42. A `libft` inclui funções de manipulação de strings, validação, conversão, manipulação de memória, operações de listas, e mais.

## Introdução

Esta biblioteca foi criada para fornecer uma base sólida de funções C que podem ser utilizadas em diversos projetos. A `libft` é organizada em diferentes módulos para facilitar a reutilização e a manutenção do código.

## Estrutura do Projeto

A `libft` está organizada da seguinte forma:

```plaintext
libft/
│

# Funções de conversão
├── convert
│   ├── ft_atoi.c
│   └── ft_itoa.c
│
 # Funções de validação
├── is            
│   ├── ft_isdigit.c
│   ├── ft_isalpha.c
│   └── ft_isalnum.c
│
 # Funções de listas
├── list          
│   ├── ft_lstnew.c
│   ├── ft_lstadd.c
│   └── ft_lstdel.c
│
# Funções de manipulação de memória
├── mem            
│   ├── ft_memset.c
│   ├── ft_memcpy.c
│   └── ft_memmove.c
│
 # Funções de impressão
├── print         
│   ├── ft_putchar.c
│   ├── ft_putstr.c
│   └── ft_putnbr.c
│
 # Funções relacionadas ao projeto ft_printf
├── printf        
│   ├── ft_printf.c
│   └── ft_printf_utils.c
│
# Funções de manipulação de strings
├── string         
│   ├── ft_strlen.c
│   ├── ft_strcpy.c
│   └── ft_strcat.c
│
├── Makefile       # Script de compilação
├── libft.h        # Arquivo de cabeçalho
└── main.c         # Arquivo principal para testes das funções
