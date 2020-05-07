﻿# Self Watering System

วิดีโอสาธิต : [https://youtu.be/e3nabCGN2oc](https://youtu.be/e3nabCGN2oc)

อุปกรณ์รดน้ำต้นไม้ขนาดเล็กที่ทำงานเมื่อความชื้นในดินต่ำกว่าที่กำหนดไว้ เเล้วจะทำการวิเคราะห์เพื่อรดน้ำให้ต้นไม้ได้อัตโนมัติ สามารถนำมาต่อยอดไปเป็นเครื่องที่ใหญ่กว่าเพื่อต้นไม้ขนาดที่ใหญ่กว่าได้

## หลักการทำงาน
###  Self Watering

เมื่อ Soil Moisture Sensor วัดความชื้นและประมวลผลโดยโมดูลประมวลผล ค่าที่ได้ซึ่งเป็นค่าแบบ Analog จะถูกส่งเข้ามายังคอมพิวเตอร์เพื่อทำการเปรียบเทียบ หากค่าความชื้นที่วัดได้สูงกว่า 750 หมายความว่าดินแห้ง Relay จะมีค่าเป็น LOW ทำให้วงจรปิดและปั๊มน้ำทำงาน เมื่อค่าความชื้นลดลงต่ำกว่า 750 หมายความว่าดินชื้น Relay จะมีค่าเป็น HIGH ทำให้วงจรเปิดและปั๊มหยุดน้ำทำงาน


###  Self Watering with LINE Notification

เมื่อ Soil Moisture Sensor วัดความชื้นและประมวลผลโดยโมดูลประมวลผล ค่าที่ได้ซึ่งเป็นค่าแบบ Analog จะถูกส่งเข้ามายังคอมพิวเตอร์เพื่อทำการเปรียบเทียบ หากค่าความชื้นที่วัดได้สูงกว่า 750 Line Notification จะทำการแจ้งเตือนว่าดินแห้ง Relay จะมีค่าเป็น LOW ทำให้วงจรปิดและปั๊มน้ำทำงาน เมื่อค่าความชื้นลดลงต่ำกว่า 750 หมายความว่าดินชื้น Relay จะมีค่าเป็น HIGH ทำให้วงจรเปิดและปั๊มหยุดน้ำทำงาน Notification จะทำการแจ้งเตือนว่าดินชื้นแล้ว

## จุดประสงค์

- รดน้ำต้นไม้ได้แม้จะไม่ได้อยู่ที่บ้าน
-  ประหยัดเวลา

## ข้อจำกัด

-  จำกัดขนาดต้นไม้
-  ต้องเชื่อมต่อไฟฟ้าอยู่ตลอดเวลา

