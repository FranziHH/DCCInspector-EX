/*
 * 
 * How Find Out Which Pin used for direct connection?
 *  in DCC-Ex:
 *  
 * MotorDriver(byte power_pin, byte signal_pin, byte signal_pin2, int8_t brake_pin, byte current_pin,
 *             float senseFactor, unsigned int tripMilliamps, byte faultPin);
 *             
 * #define STANDARD_MOTOR_SHIELD F("STANDARD_MOTOR_SHIELD"),                                                 \
 *                               new MotorDriver(3, 12, UNUSED_PIN, 9, A0, 0.488, 1500, UNUSED_PIN), \
 *                               new MotorDriver(11, 13, UNUSED_PIN, 8, A1, 0.488, 1500, UNUSED_PIN)
 *
 * in this Case - standard MotorShield are the PINs
 *  Track: Pin12
 *  Prog:  Pin13
 *  
 *  
 */
