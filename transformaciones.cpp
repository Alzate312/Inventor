#include <stdio.h>
#include <math.h>

int n;

float[4][4] rot_eje_x = {{1,0,0,0},{0,cos(n),-1*sin(n),0},{0,sin(n),cos(n),0},{0,0,0,1}};
float[4][4] rot_eje_y = {{cos(n),0,sin(n),0},{0,1,0,0},{-1*sin(n),0,cos(n),0},{0,0,0,1}};
float[4][4] rot_eje_z = {{cos(n),-1*sin(n),0,0},{sin(n),cos(n),0,0},{0,0,1,0},{0,0,0,1}};

float[4][4] reflex_eje_x = {{-1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
float[4][4] reflex_eje_y = {{1,0,0,0},{0,-1,0,0},{0,0,1,0},{0,0,0,1}};
float[4][4] reflex_eje_z = {{1,0,0,0},{0,1,0,0},{0,0,-1,0},{0,0,0,1}};

float[4][4] dilat_eje_x = {{n,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
float[4][4] dilat_eje_y = {{1,0,0,0},{0,n,0,0},{0,0,1,0},{0,0,0,1}};
float[4][4] dilat_eje_z = {{1,0,0,0},{0,1,0,0},{0,0,n,0},{0,0,0,1}};


float[] multiplicar(float[4] vector, float[4][4] matrix){
	float[4] resultado;
	for(int i=1; i<5; i++){
		int cont=0;
		for(int j=0; j<5; j++){
			cont=cont +matrix[i][j]*vector[j];
		}
		resultado[i]=cont;
	}
	return resultado;
}



float[] rotar(float[4] vector, char eje, int angulo){
	int x=angulo;
	float[4][4] t;
	if(eje==x){
		t=rot_eje_x;
	}else{
		if(eje==y){
			t=rot_eje_y;
		else{
			t=rot_eje_z;
		}
	}
	return multiplicar(vector,t);
}

float[] reflejar(float[4] vector, char eje){
	float[4][4] t;
	if(eje==x){
		t=reflex_eje_x;
	}else{
		if(eje==y){
			t=reflex_eje_y;
		else{
			t=reflex_eje_z;
		}
	}
	return multiplicar(vector,t);
}

float[] dilatar(float[4] vector, char eje){
	float[4][4] t;
	if(eje==x){
		t=dilat_eje_x;
	}else{
		if(eje==y){
			t=dilat_eje_y;
		else{
			t=dilat_eje_z;
		}
	}
	return multiplicar(vector,t);
}

float[] trasladar(float[4] vector, float x, float y, float z){
	float[4][4] matrix={{1,0,0,x},{0,1,0,y},{0,0,1,z},{0,0,0,1}}
	return multiplicar(vector,matrix);
}