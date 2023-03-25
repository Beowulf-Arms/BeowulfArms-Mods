class M_Titan_AT: MissileBase
{
    class Components;
    class SensorsManagerComponent;
    class SensorTemplateVisual;
    class VisualSensorComponent;
    class AirTarget;
    class GroundTarget;
};
class rhs_ammo_atgmBase_base: M_Titan_AT
{
    airlock = 0;
    aiAmmoUsageFlags = "64 + 128 + 512";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=0;
							maxRange=0;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=35;
						nightRangeCoef=0.80000001;
						angleRangeHorizontal=5;
						angleRangeVertical=5;
					};
				};
			};
		};
};