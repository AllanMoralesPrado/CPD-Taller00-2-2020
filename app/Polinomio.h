class Polinomio{
    public:
        Polinomio(int t = 0) : terms(t) {
            coef = 0;
        }
        int get_terms() {return terms;}
    private:
        int terms;
        double* coef;
}