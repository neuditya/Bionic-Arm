# Project Overview: EMG-Controlled Multi-Servo System
This project utilizes an EMG (Electromyography) sensor to capture muscle signals and translate those electrical impulses into mechanical movement using four servo motors. It is designed for applications such as DIY prosthetic prototypes, assistive grippers, or bio-feedback educational tools.

How It Works
The system reads an analog signal from the EMG sensor (connected to pin A0) and categorizes the intensity of the muscle contraction into four distinct states based on predefined thresholds:

<table>
    <thead>
        <tr style="background-color: #f2f2f2;">
            <th style="padding: 12px; border: 1px solid #ddd; text-align: left;">Intensity Level</th>
            <th style="padding: 12px; border: 1px solid #ddd; text-align: left;">EMG Value Range</th>
            <th style="padding: 12px; border: 1px solid #ddd; text-align: left;">Servo Response (Grip Type)</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td style="padding: 12px; border: 1px solid #ddd;"><strong>Idle</strong></td>
            <td style="padding: 12px; border: 1px solid #ddd;">Less than 50</td>
            <td style="padding: 12px; border: 1px solid #ddd;">All servos reset to 0 degrees (Open hand).</td>
        </tr>
        <tr>
            <td style="padding: 12px; border: 1px solid #ddd;"><strong>Low</strong></td>
            <td style="padding: 12px; border: 1px solid #ddd;">50 - 150</td>
            <td style="padding: 12px; border: 1px solid #ddd;">Only the first servo moves (Index finger/Hook).</td>
        </tr>
        <tr>
            <td style="padding: 12px; border: 1px solid #ddd;"><strong>Medium</strong></td>
            <td style="padding: 12px; border: 1px solid #ddd;">150 - 300</td>
            <td style="padding: 12px; border: 1px solid #ddd;">First two servos move (Pinch/Partial grip).</td>
        </tr>
        <tr>
            <td style="padding: 12px; border: 1px solid #ddd;"><strong>High</strong></td>
            <td style="padding: 12px; border: 1px solid #ddd;">Greater than 300</td>
            <td style="padding: 12px; border: 1px solid #ddd;">All four servos move to 90 degrees (Full fist).</td>
        </tr>
    </tbody>
</table>

![Bionic Arm Prototype](https://raw.githubusercontent.com/neuditya/Bionic-Arm/refs/heads/main/3dprinted.jpg)
