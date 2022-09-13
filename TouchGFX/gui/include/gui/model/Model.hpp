#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();
    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
		// HTTP_URI: /api/dashboard/usage
		char* getCPUValue()
		{
			return diskload_model[0];
		}
		char* getDiskValue()
		{
			return diskload_model[1];
		}
		char* getDiskLoadValue()
		{
			return diskload_model[2];
		}
		char* getMemValue()
		{
			return diskload_model[3];
		}
		char* getTimeValue()
		{
			return diskload_model[4];
		}
		char* getZoneValue()
		{
			return diskload_model[5];
		}
	
protected:
    ModelListener* modelListener;
		char diskload_model[6][20];

};

#endif // MODEL_HPP
