#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }
		virtual void cpuChanged(){};
		virtual void diskChanged(){};
		virtual void diskLoadChanged(){};
		virtual void memChanged(){};
		virtual void timeChanged(){};
		virtual void zoneChanged(){};
		virtual void triggerInfoChanged(){};
    Model* model;
};

#endif // MODELLISTENER_HPP
