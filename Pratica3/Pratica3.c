float parteInteira(float x){
    int integerPart = x;
    return (float) integerPart;
}

float parteFracionaria(float x){
    return x - (int) x;
}

float divInts(int x, int y){
    return (float) x/y;
}

void soma1(int *p){
    *p += 1;
}

void troca(float *p, float *q){
    float accumulator = *p;
    *p = *q;
    *q = accumulator;
}

unsigned long long int fast_pow_2(int expoente){
    return (unsigned long long int)1<<expoente;
}

int ddd(unsigned int number){
    return number / 100000000;
}

int soma1SePar(unsigned int number){
    return number | (unsigned int)1;
}

int parOuImpar(unsigned int number){
    // ! -> usado para negar valor lógico || ~ -> usado para negar expressão bit a bit
    return !(number & (unsigned int)1);
}