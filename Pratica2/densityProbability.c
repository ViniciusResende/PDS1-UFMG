#include <math.h>
#include "densityProbability.h"

double CauchyExpression(double x){
  double result;

  result = (1/(M_PI*(1 + pow(x, 2))));

  return result;
}

double GumbelExpression(double x, double mi, double beta){
  double result, z;

  z = (x - mi)/beta;

  result = (1/beta)*exp(-(z + exp(-(z))));

  return result;
}

double LaplaceExpression(double x, double mi, double b){
  double result;

  result = (1/(2*b))*exp(-(fabs(x - mi))/b);

  return result;
}