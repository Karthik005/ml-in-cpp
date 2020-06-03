#ifndef ML_CPP_ML_LINEARREGRESSIONMODEL_H_
#define ML_CPP_ML_LINEARREGRESSIONMODEL_H_

#include "Stdafx.hpp"
#include "AbstractRegressionModel.hpp"
#include "exceptions.hpp"

class LinearRegressionModel : public AbstractRegressionModel
{
public:
    LinearRegressionModel(float learning_rate, 
                          FitAlg fit_alg = FitAlg::ST_GRAD, 
                          RegMode reg_mode = RegMode::NONE,
                          float lambda = 1.0);
    virtual void fit(const Eigen::MatrixXd &X, const Eigen::MatrixXd &Y);
    virtual Eigen::MatrixXd predict(const Eigen::MatrixXd &X);

private:
    Eigen::MatrixXd weights_; // weights
    Eigen::MatrixXd X_; // cached train X
    Eigen::MatrixXd Y_; // cached train Y
    FitAlg fit_alg_; // fitting algorithm
    RegMode reg_mode_; // learning rate
    float alpha_; // learning rate
    float lambda_; // regularization hyperparam

    // funcs
    double get_mean_squared_loss(Eigen::MatrixXd predicted, Eigen::MatrixXd actual) {
        if (predicted.rows() != actual.rows() || predicted.cols() != actual.cols()) {
            throw ShapeMismatch();
        }

        auto diff_val = predicted - actual;
        diff_val = diff_val.pow(2);

    }
};

#endif
