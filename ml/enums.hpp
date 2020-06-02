#ifndef ML_CPP_ML_ENUMS_H_
#define ML_CPP_ML_ENUMS_H_

enum class FitAlg
{
    ST_GRAD, // stochastic gradient descent
    BATCH_GRAD, // batch gradient descent
    NORMAL_EQN // normal equation/ closed form 
};

enum class RegMode
{
    NONE,
    L1, // L1 regularization
    L2, // L2 regularization (ridge)
    L1_L2 // Combination (L1 & L2)
};

#endif