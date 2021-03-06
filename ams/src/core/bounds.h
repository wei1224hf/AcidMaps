#ifndef LIB_SOURCE_CORE_BOUNDS_H_
#define LIB_SOURCE_CORE_BOUNDS_H_
/**
 * @file bounds.h
 * @brief Bounds structure definition
 * 
 * @date 2010-11-03
 * @authors Fabio R. Panettieri
 */

namespace acid_maps {

/**
 * @brief Bounding Box representation
 * Instances of this class represent bounding boxes.
 * Data stored as min_x, min_y, max_x, max_y floats.
 * All values are initialized to 0, however, you should make sure you set them
 * before using the bounds for anything.
 */
struct Bounds {
  Bounds();
  Bounds(float min_x, float min_y, float max_x, float max_y);
  
  float min_x;
  float min_y;
  float max_x;
  float max_y;
};

};  // namespace acid_maps

#endif  // LIB_SOURCE_CORE_BOUNDS_H_

