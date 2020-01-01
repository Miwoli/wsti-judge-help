#ifndef SCORE_HPP
#define SCORE_HPP

class Score {

    double max = 0;
    double min = 10;

    public:
        int judges_num = 10;
        double total;

        Score(int judges) {
            judges_num = judges;
            total = 0;
        }

        void add(double result);

        double get_avarage();
};

#endif