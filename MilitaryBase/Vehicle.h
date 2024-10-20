#pragma once
class Vehicle
{
	double pertol_amount, tank_volume;
public:
   Vehicle(double petrol_amount, double tank_volume);
   virtual ~Vehicle();

   double getTankVolume() const;
   double getPetrolAmount() const;
   virtual void arrive();
   virtual bool leave();
};

