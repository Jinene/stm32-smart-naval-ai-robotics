import paho.mqtt.client as mqtt

def on_message(client, userdata, msg):
    print(msg.topic, msg.payload.decode())

client = mqtt.Client()
client.on_message = on_message
client.connect("broker.hivemq.com",1883,60)
client.subscribe("naval/robot/status")
client.loop_forever()
