#ifndef CAMERASETTINGSOPENCV_H_
#define CAMERASETTINGSOPENCV_H_

#include <opencv2/opencv.hpp>
#include "UAVision.h"
#include "CameraSettings.h"
#include "Camera.h"
#include <iostream>

namespace uav{

class CameraSettingsOpenCV:public CameraSettings{

public:

	unsigned int *buffer;

	/**
	 * Destructor.
	 */
	~CameraSettingsOpenCV();

	/**
	 * Empty constructor that initializes all the members of the
	 * CameraSettingsEth class with dummy values.
	 */
	CameraSettingsOpenCV();

	/**
	 * Method for printing the camera settings.
	 */
	void printCameraSettings();

	/**
	 * Method for retrieving just one camera setting.
	 * @param setting - camera setting to be retrieved.
	 */
	int getCameraSetting(unsigned setting);

	/**
	 * Method for setting the value of one camera setting.
	 * @param setting - camera setting to be set.
	 * @param value - value of the camera setting to be set.
	 */
	void setCameraSetting(unsigned setting, unsigned value);

	/**
	 * Method for retrieving the size of an object of the type ReCamSettings.
	 */
	int getSize();


	unsigned int* ptr();
};
}
#endif
