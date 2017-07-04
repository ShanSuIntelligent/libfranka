#pragma once

#include "franka/gripper_state.h"
#include "franka/robot_state.h"
#include "research_interface/gripper/types.h"
#include "research_interface/robot/rbk_types.h"
#include "research_interface/robot/service_types.h"

void randomRobotState(franka::RobotState& robot_state);
void randomRobotState(research_interface::robot::RobotState& robot_state);
void testRobotStateIsZero(const franka::RobotState& actual);
void testRobotStatesAreEqual(const research_interface::robot::RobotState& expected,
                             const franka::RobotState& actual);
void testRobotStatesAreEqual(const franka::RobotState& expected, const franka::RobotState& actual);

void randomRobotCommand(research_interface::robot::RobotCommand& command);
void testMotionGeneratorCommandsAreEqual(
    const research_interface::robot::MotionGeneratorCommand& expected,
    const research_interface::robot::MotionGeneratorCommand& actual);
void testControllerCommandsAreEqual(const research_interface::robot::ControllerCommand& expected,
                                    const research_interface::robot::ControllerCommand& actual);

void randomGripperState(franka::GripperState& gripper_state);
void randomGripperState(research_interface::gripper::GripperState& gripper_state);
void testGripperStatesAreEqual(const research_interface::gripper::GripperState& expected,
                               const franka::GripperState& actual);
void testGripperStatesAreEqual(const franka::GripperState& expected,
                               const franka::GripperState& actual);

namespace research_interface {
namespace robot {

bool operator==(const Move::Deviation& left, const Move::Deviation& right);

}  // namespace robot
}  // namespace research_interface