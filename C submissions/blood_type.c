#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct person
{
    struct person *parents[2];
    char alleles[2];
}
person;
const int GENERATIONS = 3;
const int INDENT_LENGTH = 4;
person *create_family(int generations);
void print_family(person *p, int generation);
void free_family(person *p);
char random_allele();
int main(void)
{
    
    srand(time(0));

    person *p = create_family(GENERATIONS);
    
    print_family(p, 0);

    free_family(p);
}

person *create_family(int generations)
{
    
    person *child = malloc(sizeof(person));
    if (child == NULL)
    {
        return NULL;
    }

    if (generations > 1)
    {
        child->parents[0] = create_family(generations - 1);
        child->parents[1] = create_family(generations - 1);

        child->alleles[0] = child->parents[0]->alleles[rand() % 2];
        child->alleles[1] = child->parents[1]->alleles[rand() % 2];
    }

    else
    {
        
        child->parents[0] = NULL;
        child->parents[1] = NULL;

        child->alleles[0] = random_allele();
        child->alleles[1] = random_allele();
    }

    return child;
}

void free_family(person *p)
{
    if (p == NULL)
    {
        return;
    }

    free_family(p->parents[0]);
    free_family(p->parents[1]);

    free(p);
}

void print_family(person *p, int generation)
{
    
    if (p == NULL)
    {
        return;
    }

    for (int i = 0; i < generation * INDENT_LENGTH; i++)
    {
        printf(" ");
    }

    printf("Generation %i, blood type %c%c\n", generation, p->alleles[0], p->alleles[1]);
    print_family(p->parents[0], generation + 1);
    print_family(p->parents[1], generation + 1);
}

char random_allele()
{
    int r = rand() % 3;
    if (r == 0)
    {
        return 'A';
    }
    else if (r == 1)
    {
        return 'B';
    }
    else
    {
        return 'O';
    }
}
