#pragma once

#include <math.h>

double z2(long double** massiv,int l,int w){
	double sum = 0;
	for (int i = 0; i < l && i < w; i++) {
		if (massiv[i][i] > 0) {
			sum += pow(massiv[i][i], 0.5);
		}
	}
	return sum;
}

double summaDiagonali(long double** massiv, int l, int w){
	double sum = 0;
	for (int i = 0; i < l && i < w; i++){
		sum += massiv[i][i];
	}
	return sum;
}

double z3(long double** massiv, int l, int w){
	double proizv = 1;
	double sum = summaDiagonali(massiv, l, w);
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < w; j++) {
			if (i != j && massiv[i][j] < sum) {
				proizv *= massiv[i][j];
			}
		}
	}
	return sum;
}

double _min(long double** massiv, int l, int w) {
	double min = **massiv;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < w; j++) {
			if (massiv[i][j] < min) {
				min = massiv[i][j];
			}
		}
	}
	return min;
}

double _max(long double** massiv, int l, int w) {
	double max = **massiv;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < w; j++) {
			if (massiv[i][j] > max) {
				max = massiv[i][j];
			}
		}
	}
	return max;
}

double sred(long double** massiv, int l, int w) {
	double sr = 0;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < w; j++) {
			sr += massiv[i][j];
		}
	}
	return sr /(l * w);
}

int z5(long double** massiv, int l, int w){
	int num = 0;
	double x = sred(massiv, l, w);
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < w; j++) {
			if (i != j && massiv[i][j] < x) {
				num++;
			}
		}
	}
	return num;
}