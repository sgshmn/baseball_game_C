#ifndef COMPUTE_H_INCLUDED
#define COMPUTE_H_INCLUDED

void makeProblem(int* problem);
int countStrike(int* problem, int* number);
int countExist(int* problem, int* number);
int isValid(int* number);
int countBall(int* problem, int* number, int strike);

#endif // COMPUTE_H_INCLUDED
