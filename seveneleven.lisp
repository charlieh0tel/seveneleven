(defun solve ()
  (declare (optimize (speed 3) (space 0) (debug 0)))
  (block solved
    (loop for a from 1 below 711 do
      (loop for b from a below 711 do
        (loop for c from b below 711 do
          (loop for d from c below 711 do
            (when (and (= (+ a b c d) 711)
                       (= (* a b c d) (* 711 100 100 100)))
              (return-from solved (values a b c d)))))))))
