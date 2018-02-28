#include <ScriptObject.h>
#include <Zone/InstanceContent.h>

class TheStepsofFaith : public InstanceContentScript
{
public:
   TheStepsofFaith() : InstanceContentScript( 20028 )
   { }

   void onInit( InstanceContentPtr instance ) override
   {
      
      instance->registerEObj( "Dragonkiller", 2004760, 4999878, 4, { 43.311161f, 37.600201f, 35.701099f }, 1.000000f );
      instance->registerEObj( "Dragonkiller", 2004761, 4999884, 4, { -43.632969f, 37.582890f, -115.844101f }, 0.991760f );
      instance->registerEObj( "Dragonkiller", 2004762, 4999881, 4, { 43.015141f, 37.582890f, -284.251709f }, 0.991760f );
      instance->registerEObj( "Unknown0", 2004767, 4886787, 4, { -3.110714f, 0.000000f, -348.303711f }, 1.000000f );
      instance->registerEObj( "Unknown1", 2004757, 0, 4, { 2.667883f, 0.324675f, 123.758301f }, 1.000000f );
      instance->registerEObj( "Unknown2", 2004758, 0, 4, { 4.085252f, 0.000000f, -28.159849f }, 1.000000f );
      instance->registerEObj( "Unknown3", 2004759, 0, 4, { 1.381998f, 0.000000f, -194.763107f }, 1.000000f );
      instance->registerEObj( "Unknown4", 2004763, 5038552, 4, { 0.000000f, -0.000000f, 45.788021f }, 1.000000f );
      instance->registerEObj( "Unknown5", 2004764, 5038553, 4, { -0.015320f, -0.015320f, -114.274803f }, 0.991760f );
      instance->registerEObj( "Unknown6", 2004765, 5038554, 4, { -0.015320f, -0.000000f, -276.691895f }, 0.991760f );
      instance->registerEObj( "Snare", 2005115, 0, 4, { -18.000000f, 0.045776f, -155.000000f }, 0.991760f );
      instance->registerEObj( "Snare", 2005116, 0, 4, { 18.000000f, 0.045776f, -155.016403f }, 0.991760f );
      instance->registerEObj( "Snare", 2005117, 0, 4, { -18.000000f, 0.045776f, -315.022491f }, 0.991760f );
      instance->registerEObj( "Snare", 2005118, 0, 4, { 18.000000f, 0.045776f, -315.022491f }, 0.991760f );
      instance->registerEObj( "Unknown7", 2005215, 5698814, 4, { 46.280449f, 37.600201f, 45.540260f }, 1.000000f );
      instance->registerEObj( "Unknown8", 2005216, 5698815, 4, { -42.818661f, 37.600201f, -120.297798f }, 1.000000f );
      instance->registerEObj( "Unknown9", 2005217, 5698817, 4, { 43.612808f, 37.600201f, -279.243195f }, 1.000000f );
      instance->registerEObj( "Entrance", 2000182, 5035236, 5, { 5.791933f, 0.049998f, 253.589600f }, 1.000000f );
      instance->registerEObj( "Exit", 2000139, 0, 4, { 0.000000f, -0.000000f, -350.057312f }, 0.991760f );
      instance->registerEObj( "Shortcut", 2000700, 0, 4, { -5.264404f, 0.045776f, 248.188004f }, 0.991760f );
      instance->registerEObj( "Exit", 2000139, 0, 4, { 0.000000f, -0.000104f, 125.000000f }, 0.991760f );
      instance->registerEObj( "Exit", 2000139, 0, 4, { 0.000000f, -0.079958f, -35.000000f }, 0.991760f );
      instance->registerEObj( "Exit", 2000139, 0, 4, { 0.000000f, 0.000000f, -195.000000f }, 0.991760f );
   }

   void onUpdate( InstanceContentPtr instance, uint32_t currTime ) override
   {

   }

   void onEnterTerritory( Entity::Player &player, uint32_t eventId, uint16_t param1, uint16_t param2 ) override
   {

   }

};