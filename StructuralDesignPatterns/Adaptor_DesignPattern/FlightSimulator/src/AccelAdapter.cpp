#include "../inc/AccelAdapter.h"


bool AccelAdapter::Up() {
	return Adaptee.GetVerticalAAxis() > 0;

}

bool AccelAdapter::Down() {
	return Adaptee.GetVerticalAAxis() < 0;

}

bool AccelAdapter::Left() {

	return Adaptee.GetHorizontalAAxis() <0;
}

bool AccelAdapter::Right() {

	return Adaptee.GetHorizontalAAxis() > 0;
}