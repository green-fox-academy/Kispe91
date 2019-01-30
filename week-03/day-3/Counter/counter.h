
#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

class Counter {

public:
    Counter (int specifiedValue = 0){
        _fieldValue = specifiedValue;
    };

    void add(int number = 1){
        _fieldValue += number;
    }

    int get(){
        return _fieldValue;
    }

    int reset(){
        return _fieldValue = 0;
    }

private:

    int _fieldValue;
};

#endif
