#include "LinearRegressionModel.hpp"

// stl headers
#include <iostream>

// third-party lib headers
// Eigen headers
#include <Eigen3/Dense>

// project headers
#include "Stdafx.hpp"

LinearRegressionModel::LinearRegressionModel(float alpha, 
                                             FitAlg fit_alg,
                                             RegMode reg_mode,
                                             float lambda)
{
    alpha_ = alpha;
    fit_alg_ = fit_alg;
    reg_mode_ = reg_mode;
    lambda_ = lambda;
    weights_ = Eigen::MatrixXd::Zero(1,1);
}

void LinearRegressionModel::fit(const Eigen::MatrixXd &X, const Eigen::MatrixXd &Y)
{
    // set cache values
    X_ = X;
    Y_ = Y;
    
    // Append column of 1's to the matrix (bias term)
    X_.conservativeResize(Eigen::NoChange_t::NoChange, X.cols() + 1) ;
    X_.col(X_.cols() - 1) = Eigen::VectorXd::Ones(X_.rows());

    std::cout << X_ << std::endl;

    weights_ = Eigen::MatrixXd::Zero(X_.cols(), Y_.cols());
    std::cout << weights_ << std::endl;

    loss_function = 
    if (fit_alg_ == FitAlg::ST_GRAD) {
        
    }
}

Eigen::MatrixXd LinearRegressionModel::predict(const Eigen::MatrixXd &X) {
    return X;
}

int main() {
    // test model
    LinearRegressionModel myModel(0.7);
    myModel.fit(Eigen::Matrix4d::Zero(), Eigen::Vector4d::Ones());
}



