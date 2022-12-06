//
// Created by fss on 22-11-13.
//

#ifndef KUIPER_COURSE_SOURCE_LAYER_LINEAR_HPP_
#define KUIPER_COURSE_SOURCE_LAYER_LINEAR_HPP_
#include "layer/abstract/layer.hpp"
#include "layer/abstract/param_layer.hpp"

namespace kuiper_infer {
class LinearLayer : public ParamLayer {
 public:

  explicit LinearLayer(uint32_t batch, uint32_t in_channel, uint32_t in_dim, uint32_t out_dim, bool use_bias = true);

  InferStatus Forward(const std::vector<std::shared_ptr<Tensor<float>>> &inputs,
                      std::vector<std::shared_ptr<Tensor<float>>> &outputs) override;

 private:
  bool use_bias_ = false;
};
}

#endif //KUIPER_COURSE_SOURCE_LAYER_LINEAR_HPP_