#ifndef __USER_NRF24L01P
#define __USER_NRF24L01P

// nRF24L01+ defines

// Interrupt flags.
#define NRF_IRQ_IDLE            0x00  // Idle, no interrupt pending
#define NRF_IRQ_MAX_RT          0x10  // Max #of TX retrans interrupt
#define NRF_IRQ_TX_DS           0x20  // TX data sent interrupt
#define NRF_IRQ_RX_DR           0x40  // RX data received

// Commands.
#define NRF_CMD_READ_REG        0x00  // Define read command to register
#define NRF_CMD_WRITE_REG       0x20  // Define write command to register
#define NRF_CMD_RD_RX_PLOAD     0x61  // Define RX payload register address
#define NRF_CMD_WR_TX_PLOAD     0xA0  // Define TX payload register address
#define NRF_CMD_FLUSH_TX        0xE1  // Define flush TX register command
#define NRF_CMD_FLUSH_RX        0xE2  // Define flush RX register command
#define NRF_CMD_REUSE_TX_PL     0xE3  // Define reuse TX payload register command
#define NRF_CMD_NOP             0xFF  // Define No Operation

// Common registers.
#define NRF_REG_CONFIG          0x00  // 'Config' register address
#define NRF_REG_EN_AA           0x01  // 'Enable Auto Acknowledgment' register address
#define NRF_REG_EN_RXADDR       0x02  // 'Enabled RX addresses' register address
#define NRF_REG_SETUP_AW        0x03  // 'Setup address width' register address
#define NRF_REG_SETUP_RETR      0x04  // 'Setup Auto. Retrans' register address
#define NRF_REG_RF_CH           0x05  // 'RF channel' register address
#define NRF_REG_RF_SETUP        0x06  // 'RF setup' register address
#define NRF_REG_STATUS          0x07  // 'Status' register address
#define NRF_REG_OBSERVE_TX      0x08  // 'Observe TX' register address
#define NRF_REG_CD              0x09  // 'Carrier Detect' register address
#define NRF_REG_RX_ADDR_P0      0x0A  // 'RX address pipe0' register address
#define NRF_REG_RX_ADDR_P1      0x0B  // 'RX address pipe1' register address
#define NRF_REG_RX_ADDR_P2      0x0C  // 'RX address pipe2' register address
#define NRF_REG_RX_ADDR_P3      0x0D  // 'RX address pipe3' register address
#define NRF_REG_RX_ADDR_P4      0x0E  // 'RX address pipe4' register address
#define NRF_REG_RX_ADDR_P5      0x0F  // 'RX address pipe5' register address
#define NRF_REG_TX_ADDR         0x10  // 'TX address' register address
#define NRF_REG_RX_PW_P0        0x11  // 'RX payload width, pipe0' register address
#define NRF_REG_RX_PW_P1        0x12  // 'RX payload width, pipe1' register address
#define NRF_REG_RX_PW_P2        0x13  // 'RX payload width, pipe2' register address
#define NRF_REG_RX_PW_P3        0x14  // 'RX payload width, pipe3' register address
#define NRF_REG_RX_PW_P4        0x15  // 'RX payload width, pipe4' register address
#define NRF_REG_RX_PW_P5        0x16  // 'RX payload width, pipe5' register address
#define NRF_REG_FIFO_STATUS     0x17  // 'FIFO Status Register' register address

// Address length
#define NRF_AW_LEN_3BYTES       0x01
#define NRF_AW_LEN_4BYTES       0x02
#define NRF_AW_LEN_5BYTES       0x03

// Auto ack. 
#define NRF_EN_AA_PIPE5         0x20
#define NRF_EN_AA_PIPE4         0x10
#define NRF_EN_AA_PIPE3         0x08
#define NRF_EN_AA_PIPE2         0x04
#define NRF_EN_AA_PIPE1         0x02
#define NRF_EN_AA_PIPE0         0x01

// Reg Opreations
#define NRF_OPR_READ_REG(reg)   (reg) // Read operation, no mask
#define NRF_OPR_WRITE_REG(reg)  (0x20 | reg) // Write operation, mask 0x20

// Struct typedefs

typedef struct
{
  uint8_t AddressWidth;
  uint8_t Address[5]; // WARNING: LSByte FIRST!
  uint8_t EnabledPipelines;
  uint8_t AutoAcknowledge;
} NRF_InitTypeDef;

#endif
