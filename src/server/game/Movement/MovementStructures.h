/*
* Copyright (C) 2008-2011 TrinityCore <http://www.trinitycore.org/>
* Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _MOVEMENT_STRUCTURES_H
#define _MOVEMENT_STRUCTURES_H

enum MovementStatusElements
{
    MSEFlags,
    MSEFlags2,
    MSETimestamp,
    MSEHavePitch,
    MSEGuidByte0,
    MSEGuidByte1,
    MSEGuidByte2,
    MSEGuidByte3,
    MSEGuidByte4,
    MSEGuidByte5,
    MSEGuidByte6,
    MSEGuidByte7,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHaveTransportData,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSETransportGuidByte0,
    MSETransportGuidByte1,
    MSETransportGuidByte2,
    MSETransportGuidByte3,
    MSETransportGuidByte4,
    MSETransportGuidByte5,
    MSETransportGuidByte6,
    MSETransportGuidByte7,
    MSEHaveSpline,
    MSEHaveSplineElev,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEPositionO,
    MSEGuidByte0_2,
    MSEGuidByte1_2,
    MSEGuidByte2_2,
    MSEGuidByte3_2,
    MSEGuidByte4_2,
    MSEGuidByte5_2,
    MSEGuidByte6_2,
    MSEGuidByte7_2,
    MSEPitch,
    MSEFallTime,
    MSETransportGuidByte0_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte4_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte6_2,
    MSETransportGuidByte7_2,
    MSESplineElev,
    MSEFallHorizontalSpeed,
    MSEFallVerticalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportTime3,
    MSE_COUNT
};
//4.2.2
MovementStatusElements PlayerMoveSequence[] = {
    MSEHaveSplineElev,
    MSEHaveTransportData,
    MSEGuidByte5,
    MSETransportGuidByte2,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte0,
    MSETransportHaveTime2,
    MSETransportGuidByte7,
    MSETransportHaveTime3,
    MSETransportGuidByte6,
    MSETransportGuidByte5,
    MSEGuidByte7,
    MSEGuidByte3,
    MSEGuidByte1,
    MSEGuidByte4,
    MSEGuidByte0,
    MSEFlags,
    MSEHavePitch,
    MSEGuidByte2,
    MSEFlags2,
    MSEGuidByte6,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHaveSpline,
    MSEGuidByte4_2,
    MSEGuidByte0_2,
    MSEPositionO,
    MSEGuidByte6_2,
    MSEGuidByte7_2,
    MSESplineElev,
    MSETransportGuidByte4_2,
    MSETransportGuidByte2_2,
    MSETransportPositionO,
    MSETransportTime,
    MSETransportSeat,
    MSETransportGuidByte3_2,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportGuidByte1_2,
    MSETransportTime2,
    MSETransportTime3,
    MSETransportGuidByte5_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte6_2,
    MSETransportGuidByte7_2,
    MSEGuidByte2_2,
    MSETimestamp,
    MSEGuidByte1_2,
    MSEPitch,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEGuidByte5_2,
    MSEGuidByte3_2,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSEFallVerticalSpeed,
    MSEFallTime,
};
//4.2.2
MovementStatusElements MovementFallLandSequence[] = {
    MSEGuidByte4,
    MSEGuidByte6,
    MSEGuidByte3,
    MSEHaveSpline,
    MSEGuidByte2,
    MSEFlags,
    MSEGuidByte7,
    MSEGuidByte1,
    MSEFlags2,
    MSEGuidByte5,
    MSEGuidByte0,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHavePitch,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEHaveSplineElev,
    MSEPositionO,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSETimestamp,
    MSEGuidByte7_2,
    MSEGuidByte2_2,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSEGuidByte0_2,
    MSEPitch,
    MSEGuidByte4_2,
    MSEGuidByte6_2,
    MSEGuidByte5_2,
    MSEGuidByte3_2,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSESplineElev,
    MSEGuidByte1_2,
};
//4.2.2
MovementStatusElements MovementHeartBeatSequence[] = {
    MSEFlags,
    MSEHaveSpline,
    MSEGuidByte0,
    MSEGuidByte6,
    MSEGuidByte1,
    MSEGuidByte7,
    MSEGuidByte2,
    MSEGuidByte4,
    MSEGuidByte3,
    MSEFlags2,
    MSEGuidByte5,
    MSEHaveSplineElev,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEHavePitch,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSETimestamp,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEPositionO,
    MSEGuidByte7_2,
    MSEGuidByte5_2,
    MSESplineElev,
    MSEGuidByte1_2,
    MSEGuidByte6_2,
    MSEGuidByte4_2,
    MSEGuidByte3_2,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSEPitch,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSEGuidByte2_2,
    MSEGuidByte0_2,
};
//4.2.2
MovementStatusElements MovementJumpSequence[] = {
    MSEHaveSpline,
    MSEGuidByte0,
    MSEGuidByte1,
    MSEGuidByte4,
    MSEFlags,
    MSEGuidByte2,
    MSEGuidByte5,
    MSEGuidByte3,
    MSEFlags2,
    MSEGuidByte7,
    MSEGuidByte6,
    MSEHaveSplineElev,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHavePitch,
    MSEPositionO,
    MSETimestamp,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSESplineElev,
    MSEGuidByte0_2,
    MSEGuidByte5_2,
    MSEGuidByte3_2,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSEGuidByte4_2,
    MSEGuidByte1_2,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSEGuidByte2_2,
    MSEGuidByte6_2,
    MSEGuidByte7_2,
    MSEPitch,
};
//4.2.2
MovementStatusElements MovementSetFacingSequence[] = {
    MSEFlags,
    MSEGuidByte4,
    MSEGuidByte2,
    MSEHaveSpline,
    MSEGuidByte3,
    MSEGuidByte5,
    MSEFlags2,
    MSEGuidByte0,
    MSEGuidByte7,
    MSEGuidByte6,
    MSEGuidByte1,
    MSEHaveSplineElev,
    MSEHavePitch,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEPositionO,
    MSETimestamp,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEGuidByte7_2,
    MSEGuidByte5_2,
    MSESplineElev,
    MSEGuidByte4_2,
    MSEGuidByte1_2,
    MSEGuidByte2_2,
    MSEPitch,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSEGuidByte6_2,
    MSEGuidByte0_2,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSEGuidByte3_2,
};
//4.2.2
MovementStatusElements MovementSetPitchSequence[] = {
    MSEGuidByte1,
    MSEGuidByte6,
    MSEGuidByte7,
    MSEGuidByte3,
    MSEFlags,
    MSEGuidByte5,
    MSEGuidByte2,
    MSEGuidByte0,
    MSEHaveSpline,
    MSEGuidByte4,
    MSEFlags2,
    MSEHaveSplineElev,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEHavePitch,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSETimestamp,
    MSEPositionO,
    MSEGuidByte1_2,
    MSEGuidByte4_2,
    MSESplineElev,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSEPitch,
    MSEGuidByte5_2,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSEGuidByte0_2,
    MSEGuidByte3_2,
    MSEGuidByte6_2,
    MSEGuidByte7_2,
    MSEGuidByte2_2,
};
//4.2.2
MovementStatusElements MovementStartBackwardSequence[] = {
    MSEGuidByte5,
    MSEFlags2,
    MSEGuidByte2,
    MSEGuidByte7,
    MSEHaveSpline,
    MSEFlags,
    MSEGuidByte1,
    MSEGuidByte3,
    MSEGuidByte4,
    MSEGuidByte6,
    MSEGuidByte0,
    MSEHaveSplineElev,
    MSEHavePitch,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEPositionO,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSETimestamp,
    MSEGuidByte3_2,
    MSEGuidByte0_2,
    MSEGuidByte1_2,
    MSESplineElev,
    MSEGuidByte4_2,
    MSEPitch,
    MSEGuidByte7_2,
    MSEGuidByte2_2,
    MSEGuidByte6_2,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSEGuidByte5_2,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
};
//4.2.2
MovementStatusElements MovementStartForwardSequence[] = {
    MSEFlags,
    MSEGuidByte1,
    MSEGuidByte7,
    MSEFlags2,
    MSEGuidByte6,
    MSEGuidByte5,
    MSEHaveSpline,
    MSEGuidByte0,
    MSEGuidByte3,
    MSEGuidByte4,
    MSEGuidByte2,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHaveSplineElev,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEHavePitch,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSETimestamp,
    MSEPositionO,
    MSEGuidByte2_2,
    MSEGuidByte3_2,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSESplineElev,
    MSEGuidByte6_2,
    MSEGuidByte0_2,
    MSEGuidByte1_2,
    MSEGuidByte7_2,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSEGuidByte5_2,
    MSEGuidByte4_2,
    MSEPitch,
};
//4.2.2
MovementStatusElements MovementStartStrafeLeftSequence[] = {
    MSEGuidByte5,
    MSEFlags,
    MSEHaveSpline,
    MSEGuidByte6,
    MSEGuidByte1,
    MSEGuidByte2,
    MSEFlags2,
    MSEGuidByte7,
    MSEGuidByte0,
    MSEGuidByte3,
    MSEGuidByte4,
    MSEHavePitch,
    MSEHaveSplineElev,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEPositionO,
    MSETimestamp,
    MSEPitch,
    MSESplineElev,
    MSEGuidByte7_2,
    MSEGuidByte5_2,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSEGuidByte4_2,
    MSEGuidByte3_2,
    MSEGuidByte2_2,
    MSEGuidByte6_2,
    MSEGuidByte0_2,
    MSEGuidByte1_2,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
};
//4.2.2
MovementStatusElements MovementStartStrafeRightSequence[] = {
    MSEGuidByte3,
    MSEGuidByte2,
    MSEGuidByte4,
    MSEGuidByte5,
    MSEGuidByte0,
    MSEGuidByte6,
    MSEHaveSpline,
    MSEFlags2,
    MSEGuidByte1,
    MSEFlags,
    MSEGuidByte7,
    MSEHaveSplineElev,
    MSEHavePitch,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEPositionO,
    MSETimestamp,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEGuidByte4_2,
    MSEGuidByte1_2,
    MSEGuidByte2_2,
    MSESplineElev,
    MSEGuidByte0_2,
    MSEPitch,
    MSEGuidByte6_2,
    MSEGuidByte3_2,
    MSEGuidByte7_2,
    MSEGuidByte5_2,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
};
//4.2.2
MovementStatusElements MovementStartTurnLeftSequence[] = {
    MSEGuidByte5,
    MSEGuidByte4,
    MSEGuidByte6,
    MSEGuidByte0,
    MSEGuidByte1,
    MSEGuidByte7,
    MSEGuidByte2,
    MSEGuidByte3,
    MSEFlags,
    MSEFlags2,
    MSEHaveSpline,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEHaveSplineElev,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHavePitch,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSETimestamp,
    MSEPositionO,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSEGuidByte4_2,
    MSEGuidByte0_2,
    MSEGuidByte7_2,
    MSEGuidByte1_2,
    MSEGuidByte6_2,
    MSEGuidByte5_2,
    MSEGuidByte3_2,
    MSESplineElev,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSEGuidByte2_2,
    MSEPitch,
};
//4.2.2
MovementStatusElements MovementStartTurnRightSequence[] = {
    MSEGuidByte4,
    MSEGuidByte1,
    MSEGuidByte6,
    MSEGuidByte0,
    MSEFlags,
    MSEGuidByte5,
    MSEFlags2,
    MSEHaveSpline,
    MSEGuidByte2,
    MSEGuidByte3,
    MSEGuidByte7,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHavePitch,
    MSEHaveSplineElev,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEPositionO,
    MSETimestamp,
    MSEGuidByte6_2,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSEGuidByte2_2,
    MSEGuidByte4_2,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSEPitch,
    MSEGuidByte7_2,
    MSEGuidByte3_2,
    MSEGuidByte1_2,
    MSEGuidByte0_2,
    MSESplineElev,
    MSEGuidByte5_2,
};
//4.2.2
MovementStatusElements MovementStopSequence[] = {
    MSEGuidByte2,
    MSEGuidByte0,
    MSEHaveSpline,
    MSEFlags,
    MSEGuidByte4,
    MSEGuidByte6,
    MSEGuidByte3,
    MSEGuidByte5,
    MSEGuidByte7,
    MSEFlags2,
    MSEGuidByte1,
    MSEHavePitch,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEHaveSplineElev,
    MSEPositionO,
    MSETimestamp,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEGuidByte2_2,
    MSEGuidByte3_2,
    MSEPitch,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSEGuidByte5_2,
    MSEGuidByte7_2,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSEGuidByte1_2,
    MSEGuidByte0_2,
    MSESplineElev,
    MSEGuidByte6_2,
    MSEGuidByte4_2,
};
//4.2.2
MovementStatusElements MovementStopStrafeSequence[] = {
    MSEGuidByte4,
    MSEFlags2,
    MSEGuidByte3,
    MSEGuidByte1,
    MSEFlags,
    MSEGuidByte5,
    MSEHaveSpline,
    MSEGuidByte2,
    MSEGuidByte6,
    MSEGuidByte0,
    MSEGuidByte7,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHavePitch,
    MSEHaveSplineElev,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEPositionO,
    MSETimestamp,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEGuidByte1_2,
    MSEGuidByte2_2,
    MSEGuidByte6_2,
    MSEGuidByte5_2,
    MSEGuidByte7_2,
    MSEGuidByte0_2,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSEGuidByte3_2,
    MSEPitch,
    MSESplineElev,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSEGuidByte4_2,
};
//4.2.2
MovementStatusElements MovementStopTurnSequence[] = {
    MSEGuidByte6,
    MSEFlags,
    MSEGuidByte2,
    MSEGuidByte3,
    MSEFlags2,
    MSEGuidByte5,
    MSEGuidByte7,
    MSEGuidByte0,
    MSEGuidByte4,
    MSEGuidByte1,
    MSEHaveSpline,
    MSEHavePitch,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHaveSplineElev,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSETimestamp,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEPositionO,
    MSEGuidByte4_2,
    MSEGuidByte5_2,
    MSEGuidByte7_2,
    MSEGuidByte1_2,
    MSEPitch,
    MSEGuidByte3_2,
    MSEGuidByte6_2,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSESplineElev,
    MSEGuidByte0_2,
    MSEGuidByte2_2,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
};
//4.2.2
MovementStatusElements MovementStartAscendSequence[] = {
    MSEGuidByte3,
    MSEGuidByte1,
    MSEGuidByte5,
    MSEFlags,
    MSEGuidByte4,
    MSEGuidByte6,
    MSEGuidByte0,
    MSEGuidByte7,
    MSEFlags2,
    MSEGuidByte2,
    MSEHaveSpline,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHavePitch,
    MSEHaveSplineElev,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSETimestamp,
    MSEPositionO,
    MSEGuidByte3_2,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSEPitch,
    MSEGuidByte0_2,
    MSEGuidByte5_2,
    MSESplineElev,
    MSEGuidByte1_2,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSEGuidByte4_2,
    MSEGuidByte7_2,
    MSEGuidByte2_2,
    MSEGuidByte6_2,
};
//4.2.2
MovementStatusElements MovementStartDescendSequence[] = {
    MSEGuidByte6,
    MSEGuidByte1,
    MSEGuidByte0,
    MSEGuidByte3,
    MSEFlags,
    MSEGuidByte4,
    MSEGuidByte7,
    MSEHaveSpline,
    MSEGuidByte5,
    MSEFlags2,
    MSEGuidByte2,
    MSEHaveSplineElev,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEHavePitch,
    MSETimestamp,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEPositionO,
    MSESplineElev,
    MSEGuidByte7_2,
    MSEGuidByte4_2,
    MSEGuidByte2_2,
    MSEGuidByte5_2,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSEGuidByte6_2,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSEGuidByte0_2,
    MSEGuidByte3_2,
    MSEGuidByte1_2,
    MSEPitch,
};
//4.2.2
MovementStatusElements MovementStartSwimSequence[] = {
    MSEGuidByte2,
    MSEHaveSpline,
    MSEGuidByte1,
    MSEFlags,
    MSEGuidByte3,
    MSEGuidByte5,
    MSEGuidByte0,
    MSEGuidByte6,
    MSEGuidByte7,
    MSEFlags2,
    MSEGuidByte4,
    MSEHavePitch,
    MSEHaveSplineElev,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEPositionO,
    MSETimestamp,
    MSEPitch,
    MSESplineElev,
    MSEGuidByte2_2,
    MSEGuidByte0_2,
    MSEGuidByte5_2,
    MSEGuidByte4_2,
    MSEGuidByte7_2,
    MSEGuidByte1_2,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSEGuidByte3_2,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSEGuidByte6_2,
};
//4.2.2
MovementStatusElements MovementStopAscendSequence[] = {
    MSEGuidByte0,
    MSEGuidByte3,
    MSEFlags2,
    MSEGuidByte1,
    MSEGuidByte5,
    MSEHaveSpline,
    MSEGuidByte4,
    MSEGuidByte2,
    MSEFlags,
    MSEGuidByte7,
    MSEGuidByte6,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHaveTransportData,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSEHavePitch,
    MSEHaveSplineElev,
    MSETimestamp,
    MSEPositionO,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEGuidByte0_2,
    MSEGuidByte1_2,
    MSEGuidByte2_2,
    MSEGuidByte7_2,
    MSEFallTime,
    MSEFallVerticalSpeed,
    MSEFallHorizontalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte6_2,
    MSETransportTime3,
    MSETransportGuidByte7_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte0_2,
    MSETransportGuidByte4_2,
    MSEPitch,
    MSEGuidByte5_2,
    MSEGuidByte4_2,
    MSEGuidByte3_2,
    MSESplineElev,
    MSEGuidByte6_2,
};

MovementStatusElements* GetMovementStatusElementsSequence(Opcodes opcode)
{
    switch(opcode)
    {
    case SMSG_PLAYER_MOVE://done
        return PlayerMoveSequence;
    case MSG_MOVE_FALL_LAND://done
        return MovementFallLandSequence;
    case MSG_MOVE_HEARTBEAT://done
        return MovementHeartBeatSequence;
    case MSG_MOVE_JUMP://done
        return MovementJumpSequence;
    case MSG_MOVE_SET_FACING://done
        return MovementSetFacingSequence;
    case MSG_MOVE_SET_PITCH://done
        return MovementSetPitchSequence;
    case MSG_MOVE_START_BACKWARD://done
        return MovementStartBackwardSequence;
    case MSG_MOVE_START_FORWARD://done
        return MovementStartForwardSequence;
    case MSG_MOVE_START_STRAFE_LEFT://done
        return MovementStartStrafeLeftSequence;
    case MSG_MOVE_START_STRAFE_RIGHT://done
        return MovementStartStrafeRightSequence;
    case MSG_MOVE_START_TURN_LEFT://done
        return MovementStartTurnLeftSequence;
    case MSG_MOVE_START_TURN_RIGHT://done
        return MovementStartTurnRightSequence;
    case MSG_MOVE_STOP://done
        return MovementStopSequence;
    case MSG_MOVE_STOP_STRAFE://done
        return MovementStopStrafeSequence;
    case MSG_MOVE_STOP_TURN://done
        return MovementStopTurnSequence;
    case MSG_MOVE_START_ASCEND://done
        return MovementStartAscendSequence;
    case MSG_MOVE_START_DESCEND://done
        return MovementStartDescendSequence;
    case MSG_MOVE_START_SWIM://done
        return MovementStartSwimSequence;
    case MSG_MOVE_STOP_ASCEND://done
        return MovementStopAscendSequence;
    default:
        break;
    }
    return NULL;
}

#endif