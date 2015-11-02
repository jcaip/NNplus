#include<armadillo>
#include"costFunction.hpp"
#include"printMat.hpp"
#include"sigmoid.hpp"

using namespace arma;

double nnCostFunction(Col theta_large, int input_layer_size, int hidden_layer_size,int num_labels, mat X,umat y, double lambda, mat& gradient){
	
	//defining some variables 
	//int m = X.n_rows();
	double J = 0;
	
	//mat theta1 = mat(input_layer_size*hidden_layer_size, 1);
	//mat theta2 = mat(num_labels*hidden_layer_size, 1);

	//unrolls the parameters	
	//for(int i=0;i<theta_large.size();i++){
	//	i < hidden_layer_size*input_layer_size? theta1(i,0) = theta_large(i) : theta2(i-(hidden_layer_size*input_layer_size),0) =theta_large(i);
	//}
	//theta1.resize(input_layer_size,hidden_layer_size);
	//theta2.resize(hidden_layer_size,num_labels);
	
	//this implements the feedforward part of the neural network function
	/*mat A1 = join_horiz(ones<mat>(m,1), X);	
	mat A2 = join_horiz(ones<mat>(m,1), sigmoid(A1*theta1.t()));	
	mat h_theta = sigmoid(A2*theta2.t());
	
	//computes the cost, parallelized for each y_i individually on each thread
	#pragma omp parallel for
	for (int i=0; i<num_labels; i++){
		mat y_i = conv_to<mat>::from(y==i);
		J += accu(-y_i%log(h_theta.col(i)) - (1-y_i)%log(1-h_theta.col(i))) / m;
	}*/
	//adds regularization term to cost
	//J += (accu(square(theta1)) + accu(square(theta2)) - 2*m) * (lambda/(2*m));

	//now it updates the gradient
	return J;
}
