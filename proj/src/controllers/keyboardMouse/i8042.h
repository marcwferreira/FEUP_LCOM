#ifndef _LCOM_I8042_H_
#define _LCOM_I8042_H_

/** @defgroup i8042 i8042
 * @{
 *
 * Constants for programming the i042 KB controller
 */

/* IRQ Lines */

#define IRQ_KBC         1  /** IRQ line for KB */
#define IRQ_MOUSE       12 /** IRQ line for mouse */

/* KBC */

#define MAKE_CODE       BIT(7) /** KBC bit to detect if it is a make code */
#define TWO_BYTES       0xE0   /** KBC to detect it is a two byte code */
#define TIMEOUT_ERROR   BIT(6) /** bit signifiyng timeout error */ 
#define PARITY_ERROR    BIT(7) /** bit signifiyng praty error */
#define FULL_OUT_BUFFER BIT(0) /** bit signifying KBC out buffer is full */
#define FULL_IN_BUFFER  BIT(1) /** bit signifying KBC in buffer in full */

#define KBC_STATUS_REG  0x64   /** Port to read status from KBC */
#define KBC_IN_CMD      0x64   /** Port to write commands to KBC */
#define KBC_OUT_CMD     0x60   /** Port to write keyboard or mouse config */
#define KBC_READ_CMD    0x20   /** Port to read from KBC */
#define KBC_WRITE_CMD   0x60   /** Port to wrtie commands to devices */

/* Mouse */

#define ENABLE_INT      BIT(0)  /** bit to enable mouse's interruptions */
#define MOUSE_TICK      BIT(5)
#define MOUSE_SYNC      BIT(3)
#define MOUSE_IN        0xD4
#define MOUSE_ACK       0xFA
#define MOUSE_NACK      0xFE
#define MOUSE_ERROR     0xFC
#define MOUSE_LB        BIT(0)
#define MOUSE_RB        BIT(1)
#define MOUSE_MB        BIT(2)
#define MOUSE_X_DELTA   BIT(4)
#define MOUSE_Y_DELTA   BIT(5)
#define MOUSE_X_SIGNAL  BIT(6)
#define MOUSE_Y_SIGNAL  BIT(7)

#define WAIT_KBC        20000 /** time the KBC wait for operations that requires it */
#define MAX_ATTEMPS     10   /** attemps to send or read from KBC */

/* Scancodes */

#define MAKE_ESC        0x01 /** makescan for ESC */
#define BREAK_ESC       0x81 /** breakscan for ESC  */
#define MAKE_ENTER      0x1C /** makescan for ENTER  */
#define BREAK_ENTER     0x9C /** breakscan for ENTER */
#define MAKE_MINUS      0x0C /** makescan for MINUS  */
#define MAKE_PLUS       0x0D /** makescan for PLUS   */
#define MAKE_BACKSPACE  0x0E /** makescan for BACKSPACE */ 

#define MAKE_1          0x02 /** makescan code of 1 */ 
#define MAKE_2          0x03 /** makescan code of 2 */
#define MAKE_3          0x04 /** makescan code of 3 */
#define MAKE_4          0x05 /** makescan code of 4 */
#define MAKE_5          0x06 /** makescan code of 5 */
#define MAKE_6          0x07 /** makescan code of 6 */
#define MAKE_7          0x08 /** makescan code of 7 */
#define MAKE_8          0x09 /** makescan code of 8 */

#define MAKE_A          0x1E /** makescan code of a */
#define MAKE_B          0x30 /** makescan code of b */
#define MAKE_C          0x2E /** makescan code of c */	
#define MAKE_D          0x20 /** makescan code of d */
#define MAKE_E          0x12 /** makescan code of e */
#define MAKE_F          0x21 /** makescan code of f */
#define MAKE_G          0x22 /** makescan code of g */
#define MAKE_H          0x23 /** makescan code of h */
#define MAKE_I          0x17 /** makescan code of i */
#define MAKE_J          0x24 /** makescan code of j */
#define MAKE_K          0x25 /** makescan code of k */
#define MAKE_L          0x26 /** makescan code of l */
#define MAKE_M          0x32 /** makescan code of m */
#define MAKE_N          0x31 /** makescan code of n */
#define MAKE_O          0x18 /** makescan code of o */
#define MAKE_P          0x19 /** makescan code of p */
#define MAKE_Q          0x10 /** makescan code of q */
#define MAKE_R          0x13 /** makescan code of r */
#define MAKE_S          0x1F /** makescan code of s */
#define MAKE_T          0x14 /** makescan code of t */
#define MAKE_U          0x16 /** makescan code of u */
#define MAKE_V          0x2F /** makescan code of v */
#define MAKE_W          0x11 /** makescan code of w */
#define MAKE_X          0x2D /** makescan code of x */
#define MAKE_Y          0x15 /** makescan code of y */
#define MAKE_Z          0x2C /** makescan code of z */

#endif
