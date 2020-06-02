#ifndef ML_CPP_ML_ABSTRACTREGRESSIONMODEL_H_
#define ML_CPP_ML_ABSTRACTREGRESSIONMODEL_H_

#include "Stdafx.hpp"

class AbstractRegressionModel
{
public:
    virtual ~AbstractRegressionModel() {}
    virtual void fit(const Eigen:: MatrixXd& X, const Eigen::MatrixXd& Y) = 0;
    virtual Eigen::MatrixXd predict(const Eigen:: MatrixXd& X) = 0;
};

#endif
