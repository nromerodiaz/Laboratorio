#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define FLOAT float

/*
  Condicion Inicial
*/

FLOAT u_inic(FLOAT u, FLOAT x);

/*
  Ecuacion Diferencial Descompuesta
*/

FLOAT PDE(FLOAT r, FLOAT u_ij, FLOAT u_ijm1, FLOAT u_im1j, FLOAT u_im1j);

/*
*********************************************************
                         MAIN
*********************************************************
*/

int main(){

  FLOAT dx = 0.001;
  FLOAT dt = 0.0005;
  FLOAT c = 1.0;
  FLOAT r = c*dt/dx;
  FLOAT u = 0;
  FLOAT* ux_past;
  FLOAT* ut_past;

  //PRUEBA
  FLOAT* uu;
  uu = malloc(sizeof(FLOAT)*3);

  int nx = 1000;
  int nt = 1000;

  int i = 0;
  int j = 0;

  FLOAT* x = malloc(sizeof(FLOAT)*nx);

  FILE* data;
  data = fopen("data.dat", "w");

  FLOAT ut_1 = u_inic(uu[2], uu[0], uu[1], r)

  for(i=0;i<nx;i++){

  

  }

  return 0;

}

/********************************************************/

/*
  Condicion Inicial
*/

FLOAT u_inic(FLOAT uxp1_0, FLOAT uxm1_0, FLOAT ux_0, FLOAT r){

  FLOAT u1;
  u1 = ux_0 + r*(uxp1_0-(2*ux_0)+uxm1_0)*r/2;

  return u1;

}

/*
  Ecuacion Diferencial Descompuesta
*/

FLOAT PDE(FLOAT r, FLOAT u_ij, FLOAT u_ijm1, FLOAT u_ip1j, FLOAT u_im1j){

  FLOAT ujp1;
  ujp1 = (2*(1-r*r)*u_ij)-u_ijm1+(r*r*(u_ip1j+u_im1j));

  return ujp1;

}
